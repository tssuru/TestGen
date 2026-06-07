try:
    a,b,c=2,4,3
    def f(a):
        a=3
        b-=5
        c=3
        return a+b+c
    
    a,b,c=7,3,4
    print(f(a),a,b,c)
except: print('error')
