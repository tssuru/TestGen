try:
    a,b,c=4,1,7
    def f(a):
        a=5
        b-=3
        c=4
        return a+b+c
    
    a,b,c=0,6,8
    print(f(a),a,b,c)
    
except: print('error')
