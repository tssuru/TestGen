try:
    a,b,c=4,0,3
    def f(a):
        a+=2
        b=3
        c=1
        return a+b+c
    
    a,b,c=8,5,7
    print(f(a),a,b,c)
    
except: print('error')
