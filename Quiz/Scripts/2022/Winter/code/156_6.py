try:
    a,b,c=2,1,4
    def f(b):
        a*=4
        b=2
        c=5
        return a+b+c
    
    a,b,c=8,9,5
    print(f(a),a,b,c)
    
except: print('error')
