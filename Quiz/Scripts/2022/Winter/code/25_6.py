try:
    a,b,c=9,5,1
    def f(a):
        a*=2
        b=3
        c=5
        return a+b+c
    
    a,b,c=8,7,4
    print(f(a),a,b,c)
    
except: print('error')
