try:
    a,b,c=8,5,7
    def g(b):
        a=1
        b+=1
        c=5
        return a+b+c
    
    a,b,c=2,1,5
    print(g(a),a,b,c)
    
except: print('error')
