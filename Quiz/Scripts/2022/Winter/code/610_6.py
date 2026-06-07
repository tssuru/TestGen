try:
    a,b,c=1,0,7
    def f(b):
        a+=1
        b=3
        c=1
        return a+b+c
    
    a,b,c=4,6,5
    print(f(a),a,b,c)
    
except: print('error')
