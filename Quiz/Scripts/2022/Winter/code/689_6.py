try:
    a,b,c=8,4,2
    def h(b):
        a=4
        b-=3
        c=5
        return a+b+c
    
    a,b,c=6,0,7
    print(h(a),a,b,c)
    
except: print('error')
