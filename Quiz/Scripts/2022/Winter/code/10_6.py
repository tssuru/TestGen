try:
    a,b,c=8,6,0
    def h(b):
        a*=2
        b=2
        c=5
        return a+b+c
    
    a,b,c=8,4,3
    print(h(a),a,b,c)
    
except: print('error')
