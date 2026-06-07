try:
    a,b,c=4,9,6
    def f(a):
        a*=3
        b=2
        c=4
        return a+b+c
    
    a,b,c=0,5,8
    print(f(a),a,b,c)
    
except: print('error')
