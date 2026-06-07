try:
    a,b,c=2,9,8
    def f(b):
        a=4
        b=5
        c=5
        return a+b+c
    
    a,b,c=3,5,7
    print(f(a),a,b,c)
    
except: print('error')
