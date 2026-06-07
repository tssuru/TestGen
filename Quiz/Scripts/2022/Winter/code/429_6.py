try:
    a,b,c=2,9,0
    def h(b):
        a-=3
        b=2
        c=5
        return a+b+c
    
    a,b,c=8,3,0
    print(h(a),a,b,c)
    
except: print('error')
