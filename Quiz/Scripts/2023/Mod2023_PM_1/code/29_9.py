try:
    a,b,c=8,7,2
    def f(a):
        a=3
        b+=2
        c=4
        return a+b+c
    
    a,b,c=0,4,5
    print(f(a),a,b,c)
    
except: print('error')
