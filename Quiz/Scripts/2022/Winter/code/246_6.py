try:
    a,b,c=9,1,4
    def f(b):
        a-=5
        b=1
        c=4
        return a+b+c
    
    a,b,c=2,6,8
    print(f(a),a,b,c)
    
except: print('error')
