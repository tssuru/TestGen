try:
    a,b,c=5,6,0
    def h(a):
        a-=2
        b=1
        c=4
        return a+b+c
    
    a,b,c=9,3,9
    print(h(a),a,b,c)
    
except: print('error')
