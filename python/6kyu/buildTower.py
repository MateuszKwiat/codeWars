def tower_builder(n_floors):
    return [" "*spaces + "*"*stars + " "*spaces for spaces, stars in zip(range(n_floors - 1, -1, -1), range(1, n_floors*2, 2))]
