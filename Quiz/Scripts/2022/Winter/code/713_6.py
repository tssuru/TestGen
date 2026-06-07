try:
    a,b,c=3,9,5
    def f(a):
        a*=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=7,2,9
    print(f(a),a,b,c)
    
except: print('error')
