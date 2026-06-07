try:
    a,b,c=4,9,9
    def h(b):
        a=3
        b=4
        c=2
        return a+b+c
    
    a,b,c=6,1,2
    print(h(a),a,b,c)
    
except: print('error')
