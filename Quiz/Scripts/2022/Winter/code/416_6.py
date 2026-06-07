try:
    a,b,c=2,8,1
    def f(b):
        a-=2
        b=4
        c=5
        return a+b+c
    
    a,b,c=7,6,4
    print(f(a),a,b,c)
    
except: print('error')
