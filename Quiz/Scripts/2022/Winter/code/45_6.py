try:
    a,b,c=1,6,7
    def f(a):
        a=3
        b=1
        c=2
        return a+b+c
    
    a,b,c=5,9,8
    print(f(a),a,b,c)
    
except: print('error')
