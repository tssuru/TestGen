try:
    a,b,c=5,2,4
    def f(b):
        a=1
        b*=5
        c=3
        return a+b+c
    
    a,b,c=6,3,8
    print(f(a),a,b,c)
    
except: print('error')
