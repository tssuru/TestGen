try:
    a,b,c=7,2,8
    def f(a):
        a=5
        b=2
        c=1
        return a+b+c
    
    a,b,c=5,9,4
    print(f(a),a,b,c)
    
except: print('error')
