# C Shared Objects

Steps:

```bash
gcc -shared multiplier.c -o multiplier.so
```

```bash
sudo mv multiplier.so /usr/lib/multiplier.so
```

```bash
gcc main.c
```

```bash
./a.out
```

