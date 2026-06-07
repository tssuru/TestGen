try:
    a,b,c=6,4,8
    def f(b):
        a-=1
        b=2
        c=4
        return a+b+c
    
    a,b,c=0,5,2
    print(f(a),a,b,c)
    
except: print('error')
