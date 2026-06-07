try:
    a,b,c=2,5,3
    def h(b):
        a=2
        b=5
        c=2
        return a+b+c
    
    a,b,c=0,6,1
    print(h(a),a,b,c)
    
except: print('error')
