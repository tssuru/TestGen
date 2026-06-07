try:
    a,b,c=5,7,6
    def f(a):
        a-=1
        b=4
        c=2
        return a+b+c
    
    a,b,c=2,7,3
    print(f(a),a,b,c)
    
except: print('error')
