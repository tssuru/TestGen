try:
    a,b,c=7,8,2
    def f(a):
        a=2
        b=5
        c=5
        return a+b+c
    
    a,b,c=4,1,6
    print(f(a),a,b,c)
    
except: print('error')
