try:
    a,b,c=7,1,6
    def h(a):
        a-=4
        b=2
        c=3
        return a+b+c
    
    a,b,c=9,6,0
    print(h(a),a,b,c)
    
except: print('error')
