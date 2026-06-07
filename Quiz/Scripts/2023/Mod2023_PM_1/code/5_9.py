try:
    a,b,c=8,4,9
    def f(a):
        a=3
        b=4
        c=5
        return a+b+c
    
    a,b,c=0,7,6
    print(f(a),a,b,c)
    
except: print('error')
