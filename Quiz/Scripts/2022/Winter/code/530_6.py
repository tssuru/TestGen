try:
    a,b,c=3,9,8
    def f(b):
        a*=3
        b=5
        c=4
        return a+b+c
    
    a,b,c=6,6,7
    print(f(a),a,b,c)
    
except: print('error')
