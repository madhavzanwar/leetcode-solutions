import pandas as pd

def analyze_dna_patterns(samples: pd.DataFrame) -> pd.DataFrame:
    analyzed_samples = samples.assign(
        has_start=samples.dna_sequence.str.startswith('ATG'),
        has_stop=samples.dna_sequence.str.endswith(('TAA','TAG','TGA')),
        has_atat=samples.dna_sequence.str.contains('ATAT'),
        has_ggg=samples.dna_sequence.str.contains('GGG'),
    )
    return analyzed_samples.sort_values('sample_id').replace({True: 1, False: 0})
    
    