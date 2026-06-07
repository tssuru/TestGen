try:
    a,b,c=8,4,4
    def f(b):
        global c
        a*=3
        b=2
        c=3
        return a+b+c
    
    a,b,c=9,1,3
    print(f(a),a,b,c)
    
except: print('error')
