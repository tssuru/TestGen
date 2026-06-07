try:
    a,b,c=4,3,1
    def f(a):
        a=5
        b=4
        c=1
        return a+b+c
    
    a,b,c=5,8,2
    print(f(a),a,b,c)
    
except: print('error')
