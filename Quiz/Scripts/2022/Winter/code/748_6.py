try:
    a,b,c=0,6,2
    def f(b):
        a*=5
        b=2
        c=4
        return a+b+c
    
    a,b,c=4,9,7
    print(f(a),a,b,c)
    
except: print('error')
