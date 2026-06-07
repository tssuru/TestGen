try:
    a,b,c=0,7,3
    def f(a):
        a=1
        b=5
        c=4
        return a+b+c
    
    a,b,c=8,9,2
    print(f(a),a,b,c)
    
except: print('error')
