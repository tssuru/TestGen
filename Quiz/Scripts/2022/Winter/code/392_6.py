try:
    a,b,c=6,7,2
    def h(a):
        a=3
        b*=2
        c=5
        return a+b+c
    
    a,b,c=9,4,0
    print(h(a),a,b,c)
    
except: print('error')
