try:
    a,b,c=7,5,6
    def g(b):
        a=1
        b*=5
        c=3
        return a+b+c
    
    a,b,c=8,1,4
    print(g(a),a,b,c)
    
except: print('error')
