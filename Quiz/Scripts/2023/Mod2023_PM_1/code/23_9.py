try:
    a,b,c=0,3,7
    def f(b):
        a-=4
        b=3
        c=5
        return a+b+c
    
    a,b,c=8,3,8
    print(f(a),a,b,c)
    
except: print('error')
