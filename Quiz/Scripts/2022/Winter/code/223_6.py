try:
    a,b,c=2,9,0
    def f(b):
        a=1
        b-=2
        c=4
        return a+b+c
    
    a,b,c=7,1,5
    print(f(a),a,b,c)
    
except: print('error')
