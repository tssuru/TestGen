try:
    a,b,c=3,4,5
    def f(a):
        global c
        a=2
        b+=4
        c=5
        return a+b+c
    
    a,b,c=8,0,2
    print(f(a),a,b,c)
except: print('error')
