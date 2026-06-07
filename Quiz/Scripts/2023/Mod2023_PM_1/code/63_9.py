try:
    a,b,c=6,3,0
    def h(a):
        a=5
        b*=3
        c=1
        return a+b+c
    
    a,b,c=9,1,7
    print(h(a),a,b,c)
    
except: print('error')
