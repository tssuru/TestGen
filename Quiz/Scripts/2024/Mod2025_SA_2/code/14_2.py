try:
    a,b,c=0,3,4
    def f(b):
        a=4
        b=1
        c=3
        return a+b+c
    
    a,b,c=5,6,1
    print(f(a),a,b,c)
except: print('error')
