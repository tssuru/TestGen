try:
    a,b,c=3,9,0
    def f(b):
        a*=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=7,2,5
    print(f(a),a,b,c)
    
except: print('error')
