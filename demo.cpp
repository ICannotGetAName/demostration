#define SET_RE(X, Y) ((UINT4)0x1 << (Y - 1))
  
  if (bits(a5, 19) != bits(c4, 19))
		m0 = m0 ^ SET_RE(m0, 16);
	if (bits(a5, 26) != 0x1)
		m0 = m0 ^ SET_RE(m0, 23);
	if (bits(a5, 27) != 0x0)
		m0 = m0 ^ SET_RE(m0, 24);
	if (bits(a5, 29) != 0x1)
		m0 = m0 ^ SET_RE(m0, 26);
	if (bits(a5, 32) != 0x1)
		m0 = m0 ^ SET_RE(m0, 29);

	a1 = ROTATE_LEFT(a0 + F(b0, c0, d0) + m0, 3);
	m1 = ROTATE_LEFT(d1, 32 - 7) - d0 - F(a1, b0, c0);
	m2 = ROTATE_LEFT(c1, 32 - 11) - c0 - F(d1, a1, b0);
	m3 = ROTATE_LEFT(b1, 32 - 19) - b0 - F(c1, d1, a1);
	m4 = ROTATE_LEFT(a2, 32 - 3) - a1 - F(b1, c1, d1);
