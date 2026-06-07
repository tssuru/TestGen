try:
    a,b,c=6,9,7
    def f(b):
        a-=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=1,3,8
    print(f(a),a,b,c)
    
except: print('error')
