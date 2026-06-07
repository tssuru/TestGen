try:
    a,b,c=6,2,9
    def f(b):
        a=4
        b+=1
        c=2
        return a+b+c
    
    a,b,c=3,2,3
    print(f(a),a,b,c)
    
except: print('error')
