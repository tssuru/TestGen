try:
    a,b,c=5,8,0
    def f(a):
        a=3
        b=2
        c=1
        return a+b+c
    
    a,b,c=7,4,1
    print(f(a),a,b,c)
except: print('error')
