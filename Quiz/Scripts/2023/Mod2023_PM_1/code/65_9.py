try:
    a,b,c=7,2,8
    def f(a):
        a-=1
        b=5
        c=3
        return a+b+c
    
    a,b,c=4,6,3
    print(f(a),a,b,c)
    
except: print('error')
