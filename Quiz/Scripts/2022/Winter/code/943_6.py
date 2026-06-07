try:
    a,b,c=8,5,2
    def g(b):
        a=4
        b*=5
        c=3
        return a+b+c
    
    a,b,c=3,4,9
    print(g(a),a,b,c)
    
except: print('error')
