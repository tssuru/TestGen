try:
    a,b,c=6,7,2
    def f(b):
        global c
        a*=3
        b=4
        c=5
        return a+b+c
    
    a,b,c=3,7,2
    print(f(a),a,b,c)
    
except: print('error')
