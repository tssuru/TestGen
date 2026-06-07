try:
    a,b,c=5,9,6
    def h(b):
        a=5
        b-=2
        c=3
        return a+b+c
    
    a,b,c=8,2,0
    print(h(a),a,b,c)
    
except: print('error')
