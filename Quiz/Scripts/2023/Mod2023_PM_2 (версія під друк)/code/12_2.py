try:
    a,b,c=0,4,1
    def h(b):
        a=1
        b=2
        c=5
        return a+b+c
    
    a,b,c=0,5,9
    print(h(a),a,b,c)
    
except: print('error')
