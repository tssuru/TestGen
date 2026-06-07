try:
    a,b,c=7,2,4
    def f(a):
        a-=1
        b=4
        c=5
        return a+b+c
    
    a,b,c=5,8,6
    print(f(a),a,b,c)
    
except: print('error')
