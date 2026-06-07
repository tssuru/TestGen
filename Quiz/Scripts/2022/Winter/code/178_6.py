try:
    a,b,c=7,2,9
    def h(b):
        a*=2
        b=5
        c=3
        return a+b+c
    
    a,b,c=5,1,4
    print(h(a),a,b,c)
    
except: print('error')
